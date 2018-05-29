//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, UIView, WBTableView;
@protocol WBMediaPlaybackService, WBMediaPlaybackSourceView;

@protocol WBMediaAutoPlayContainer <NSObject>
@property(readonly, nonatomic) WBTableView *mediaPlaybackTableView;

@optional
@property(readonly, nonatomic) struct CGRect mediaAutoPlayVisibleRect;
@property(readonly, nonatomic) NSArray *currentMediaAutoPlayProviderCandidates;
@property(readonly, nonatomic) _Bool mediaAutoPlayShouldStartNow;
@property(readonly, nonatomic) _Bool generalMediaAutoPlayEnabledWhenContainedInAnotherContainer;
@property(readonly, nonatomic) _Bool generalMediaAutoPlayIgnored;
@property(readonly, nonatomic) id <WBMediaPlaybackService> mediaPlaybackService;
- (_Bool)mediaAutoPlayValidateSourceView:(UIView<WBMediaPlaybackSourceView> *)arg1;
@end

