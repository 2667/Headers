//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class WBFontSizeConfig;

@interface WBFontSizeSetting : NSObject
{
    WBFontSizeConfig *_sizeConfig;
}

+ (id)sharedInstance;
@property(retain, nonatomic) WBFontSizeConfig *sizeConfig; // @synthesize sizeConfig=_sizeConfig;
- (void).cxx_destruct;
- (void)updateFontSizeSetting;
- (id)init;

@end

