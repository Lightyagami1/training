with import <nixpkgs> {};
stdenv.mkDerivation rec {
  name = "env";
  env = buildEnv { name = name; paths = buildInputs; };
  buildInputs = [
    gcc
    python3
    neovim
    # fzf
    zsh
    # zsh-syntax-highlighting
    # zsh-completions
    # oh-my-zsh 
    # vimPlugins.fzf
    # vimPlugins.LanguageClient-neovim
    # python27Packages.virtualenv
    # python27Packages.pip
    python37Packages.pip
    python37Packages.ipython
    python37Packages.virtualenv
    # ghc
  ];
}
