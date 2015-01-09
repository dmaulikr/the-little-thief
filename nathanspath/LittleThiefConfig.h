//
//  TLTTheme.h
//  nathanspath
//
//  Created by Minh Tri Pham on 1/5/15.
//  Copyright (c) 2015 pmt. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>
#import <Foundation/Foundation.h>

@interface LittleThiefConfig : NSObject

#define MARGIN 20.0
#define GAME_DURATION 35
#define DURATION_INCREASE_FACTOR 1
#define MIN_REPORT_SCORE 2
#define SHAREWORTHY_LEVEL 1

#define FB_NAMESPACE @"pmtlittlethief"
#define FB_IMAGE_URL @"http://zyxlabs.com/static/img/fb-nathan.png"
#define FB_APPLINK @"https://fb.me/792852697416569"

+ (SKColor *)yellow;
+ (SKColor *)darkBlue;
+ (SKColor *)red;

+ (NSString *)getLandnameFromLevel:(NSInteger) level;
+ (CGFloat)getBonusFactor:(CGFloat)level;
+ (NSArray *)getEpisodes;

@end
