//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBSegmentChannelItem.h"

@interface WBNewSegmentChannelItem : WBSegmentChannelItem
{
}

+ (id)channelItemWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)switchToStateMustShowNormal;
- (void)switchToStateUnused;
- (void)switchToStateCurrentEditing;
- (void)switchToStateCurrentNormal;
- (void)setIsCurrentSelected:(_Bool)arg1;
- (void)switchToStateMustShowEditing;
- (id)initWithFrame:(struct CGRect)arg1;

@end

