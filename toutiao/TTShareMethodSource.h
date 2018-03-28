//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TTShareAppMethodSource-Protocol.h"

@class NSString;

@interface TTShareMethodSource : NSObject <TTShareAppMethodSource>
{
}

+ (void)load;
- (void)showShareIndicatorViewInKeyWindowWithTip:(id)arg1 andImage:(id)arg2 dismissHandler:(CDUnknownBlockType)arg3;
- (void)replaceQQImageURL:(id)arg1;
- (void)shareItem:(id)arg1 extroInfo:(id)arg2;
- (id)videoImageWith:(id)arg1;
- (void)activityHasSharedWith:(id)arg1 error:(id)arg2 desc:(id)arg3;
- (void)activityWillSharedWith:(id)arg1;
- (id)topmostViewController;
- (_Bool)isZoneVersion;
- (_Bool)isPadDevice;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
