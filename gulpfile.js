'use strict';

var gulp = require('gulp');

gulp.task('theme', function () {
  gulp.watch('../tdh-styleguide/build/**/*', function() {
    return gulp.src(['../tdh-styleguide/build/**/*'])
      .pipe(gulp.dest('drupal/sites/all/themes/jj2015/build'));
  });
});

gulp.task('default', ['theme'], function(){});
