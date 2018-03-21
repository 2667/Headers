//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface QZFontCache : NSObject
{
    NSMutableDictionary *_cachedFonts;
}

+ (void)preloadFontCache;
+ (id)shareInstance;
- (void).cxx_destruct;
- (id)systmeFontType:(id)arg1 withFontName:(id)arg2 size:(double)arg3;
- (id)systmeFontType:(id)arg1 size:(double)arg2;
- (id)fontWithName:(id)arg1 size:(double)arg2;
- (id)italicSystemFontOfSize:(double)arg1;
- (id)boldSystemFontOfSize:(double)arg1;
- (id)systemFontOfSize:(double)arg1;
- (id)init;

@end
