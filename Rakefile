require "rake/clean"

CLEAN << "out"

directory "out"

task :build => "out" do
  cd "out"
  sh "cmake", ".."
  sh "make"
end

task :default => :build

