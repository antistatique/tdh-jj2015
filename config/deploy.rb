set :application,     "jj2015"

# load custom recipes
load 'config/recipes.rb'

# Relative path to thedrupal path
set :app_path,        "drupal"
set :shared_children, ['drupal/sites/default/files','drupal/private-files']
set :shared_files,    ['drupal/sites/default/settings.php']
set :stages,          %w(staging prod)

set :scm,            "git"
set :repository,     "git@github.com:antistatique/tdh-jj2015.git"

set :domain,         "jj2015.alwaysdata.net"

set :user,           "jj2015"
set :group,          "jj2015"
set :runner_group,   "jj2015"

set :use_sudo,       false
default_run_options[:pty] = true
ssh_options[:forward_agent] = true

set :download_drush, true

role :app,           domain
role :db,            domain

set  :keep_releases,   3

namespace :hotfix do
  task :fix_permissions do
    count = fetch(:keep_releases, 5).to_i
    run("ls -1dt #{releases_path}/* | tail -n +#{count + 1} | xargs chmod -R 777")
  end
end

after "deploy:update_code", "styleguide:update"
after "deploy:update_code", "styleguide:build"
after "deploy:update_code", "styleguide:copy_build"

after "deploy:update", "deploy:cleanup"
before "deploy:cleanup", "hotfix:fix_permissions"

# Be more verbose by uncommenting the following line
#logger.level = Logger::MAX_LEVEL
