#import <Foundation/Foundation.h>

// Lets consuming apps call GMSServices.provideAPIKey without linking the
// GoogleMaps SPM package to their own target.
@interface AIRGMSServicesProvider : NSObject

+ (void)provideAPIKey:(NSString *)apiKey;

@end
