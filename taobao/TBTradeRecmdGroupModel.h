//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBTradeRecmdGroupModel-Protocol.h"

@class NSMutableArray, NSString;

@interface TBTradeRecmdGroupModel : NSObject <TBTradeRecmdGroupModel>
{
    NSMutableArray *_itemList;
    NSString *_groupTitle;
    unsigned long long _currentTime;
    NSString *_triggerItemPic;
}

@property(retain, nonatomic) NSString *triggerItemPic; // @synthesize triggerItemPic=_triggerItemPic;
@property(nonatomic) unsigned long long currentTime; // @synthesize currentTime=_currentTime;
@property(retain, nonatomic) NSString *groupTitle; // @synthesize groupTitle=_groupTitle;
@property(retain, nonatomic) NSMutableArray *itemList; // @synthesize itemList=_itemList;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1 extraInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

