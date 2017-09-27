

Pod::Spec.new do |s|
  s.name             = 'RuntimeLib'
  s.version          = '0.1.0'
  s.summary          = 'My First SDK Library. RuntimeLib.'

  s.description      = <<-DESC
My First Runtime SDK to take mobile surveys
                       DESC

  s.homepage         = 'https://github.com/manju3157/RuntimeLib'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'manjunath.ramesh@onepointglobal.com' => 'manjunath.ramesh@onepointglobal.com' }
  s.source           = { :git => 'https://github.com/manju3157/RuntimeLib.git', :tag => s.version.to_s }

  s.ios.deployment_target = '8.0'
  s.source_files = 'RuntimeLib/Classes/**/*'
  s.ios.vendored_library = 'libOnePoint.Runtime.a'
  s.preserve_paths = 'libOnePoint.Runtime.a'
  
  s.source_files = "include/OnePoint.Runtime/*.h"
  s.public_header_files = "include/OnePoint.Runtime/*.h"

  s.xcconfig = { 'HEADER_SEARCH_PATHS' => '/usr/include/libxml2', 'OTHER_LDFLAGS' => '-lxml2 -lz -ObjC',  'LIBRARY_SEARCH_PATHS' => "$(PODS_ROOT)/Pods/**"}
   s.library = 'xml2', 'c++', 'iconv', 'z'
end
