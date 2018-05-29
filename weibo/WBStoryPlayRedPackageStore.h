//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBStoryFluxStore.h"

#import "WBStoryFluxStore-Protocol.h"

@class NSString, WBStoryItem, WBStoryItemSegment, WBStoryPlayRedPackageItem;
@protocol WBStoryPlayRedPackageStoreDelegate;

@interface WBStoryPlayRedPackageStore : WBStoryFluxStore <WBStoryFluxStore>
{
    id <WBStoryPlayRedPackageStoreDelegate> _delegate;
    NSString *_unpackMsg;
    long long _code;
    WBStoryPlayRedPackageItem *_redPackageItem;
    WBStoryItem *_item;
    WBStoryItemSegment *_segment;
}

@property(retain, nonatomic) WBStoryItemSegment *segment; // @synthesize segment=_segment;
@property(retain, nonatomic) WBStoryItem *item; // @synthesize item=_item;
@property(readonly, nonatomic) WBStoryPlayRedPackageItem *redPackageItem; // @synthesize redPackageItem=_redPackageItem;
@property(nonatomic) long long code; // @synthesize code=_code;
@property(retain, nonatomic) NSString *unpackMsg; // @synthesize unpackMsg=_unpackMsg;
@property(nonatomic) __weak id <WBStoryPlayRedPackageStoreDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleUnpackAction:(id)arg1;
- (id)actionRecieverDict;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 item:(id)arg2 segment:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

