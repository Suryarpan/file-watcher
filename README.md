# File Watcher

This project is to build a command line utility to watch changes for files.
Some files are getting updated / deleted time to time. We need to keep a watch
on it.

## Building

```bash
$ meson setup _build
$ cd _build
$ meson compile
```

The `file-watcher` binary will be present inside the `src` directory.

