//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSMutableArray, WBNewHomeChannelListView;
@protocol WBSegmentChannelModelDelegate;

@protocol WBNewHomeChannelListViewDelegate <NSObject>

@optional
- (void)WBSegmentChannelsListViewDimiss:(WBNewHomeChannelListView *)arg1 andCurrentChannels:(NSMutableArray *)arg2 unUsedChannels:(NSMutableArray *)arg3 channelListDidChanged:(_Bool)arg4;
- (void)WBSegmentChannelsListView:(WBNewHomeChannelListView *)arg1 andCurrentChannels:(NSMutableArray *)arg2 unUsedChannels:(NSMutableArray *)arg3;
- (void)WBSegmentChannelsListViewItemBeSelected:(WBNewHomeChannelListView *)arg1 channelModel:(id <WBSegmentChannelModelDelegate>)arg2;
@end

