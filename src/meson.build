file_watcher_sources = [
  'file_watch.c',
  'file_watch.h',
  'main.c',
]

file_watcher_deps = [
  dependency('glib-2.0'),
]

executable(
  'file-watcher',
  file_watcher_sources,
  dependencies: file_watcher_deps,
  install: true,
)