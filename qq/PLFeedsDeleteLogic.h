//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/CSChannelDelegate-Protocol.h>

@class NSString;
@protocol PLFeedsDeleteLogicDelegate;

@interface PLFeedsDeleteLogic : NSObject <CSChannelDelegate>
{
    id <PLFeedsDeleteLogicDelegate> _delegate;
}

@property(nonatomic) __weak id <PLFeedsDeleteLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onError:(id)arg1;
- (void)onReceviceData:(struct LCMessage *)arg1;
- (void)reqDeleteFeeds:(id)arg1 selectAll:(_Bool)arg2 isDeleteOthers:(_Bool)arg3;
- (void)reqDeleteFeeds:(id)arg1 selectAll:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

