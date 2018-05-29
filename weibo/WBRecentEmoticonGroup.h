//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBEmoticonGroup.h"

@class NSMutableArray, WBAccount;

@interface WBRecentEmoticonGroup : WBEmoticonGroup
{
    NSMutableArray *emoticons;
    WBAccount *_account;
    _Bool changed;
    unsigned long long _maxCount;
}

+ (void)emoticonSelected:(id)arg1;
+ (id)recentGroup;
@property(nonatomic) unsigned long long maxCount; // @synthesize maxCount=_maxCount;
- (void).cxx_destruct;
- (id)groupIdentifier;
- (void)cleanImageCache;
- (long long)emoticonCount;
- (_Bool)canPublish;
- (id)emoticonAtIndex:(long long)arg1;
- (id)groupIconName;
- (id)emoticonNamed:(id)arg1;
- (void)reloadData;
- (void)accountChanged:(id)arg1;
- (void)commonInit;
- (_Bool)synchronize;
- (id)account;
- (void)setAccount:(id)arg1;
- (void)emoticonSelected:(id)arg1;
- (void)dealloc;

@end

