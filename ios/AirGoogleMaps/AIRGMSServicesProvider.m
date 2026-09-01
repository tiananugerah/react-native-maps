#import "AIRGMSServicesProvider.h"
#import <GoogleMaps/GoogleMaps.h>

@implementation AIRGMSServicesProvider

+ (void)provideAPIKey:(NSString *)apiKey
{
  [GMSServices provideAPIKey:apiKey];
}

@end
