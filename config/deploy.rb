set :application,     "jj2015"

# Relative path to thedrupal path
set :app_path,        "drupal"
set :shared_children, ['drupal/sites/default/files','private-files']
set :shared_files,    ['drupal/sites/default/settings.php']
set :stages,          %w(staging prod)

set :scm,            "git"
set :repository,     "git@github.com:antistatique/tdh-jj2015.git"

set :domain,         "jj2015.alwaysdata.net"

set :user,           "densite"
set :group,          "densite"
set :runner_group,   "densite"

set :use_sudo,       false
default_run_options[:pty] = true
ssh_options[:forward_agent] = true

set :download_drush, true

role :app,           domain
role :db,            domain

set  :keep_releases,   3
after "deploy:update", "deploy:cleanup"

# Be more verbose by uncommenting the following line
#logger.level = Logger::MAX_LEVEL
