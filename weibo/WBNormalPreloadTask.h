//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPreloadTask.h"

@class WBNormalPreloadModel;

@interface WBNormalPreloadTask : WBPreloadTask
{
    WBNormalPreloadModel *model;
}

@property(retain, nonatomic) WBNormalPreloadModel *model; // @synthesize model;
- (void).cxx_destruct;
- (void)start;
- (_Bool)preloadEnable;
- (void)dealloc;

@end

