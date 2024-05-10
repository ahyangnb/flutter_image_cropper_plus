#import <Flutter/Flutter.h>

/// Example:
///```
/// NSInteger rgbValue = 0xff0000;
/// UIColorFromRGB(rgbValue);
///```
///
/// From https://stackoverflow.com/questions/19405228/how-to-i-properly-set-uicolor-from-int
#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0];

@interface FLTImageCropperPlugin : NSObject<FlutterPlugin>
@end
