//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBIMMessageAdapter-Protocol.h"

@class NSString;

@protocol TBIMWeexCardMessage <TBIMMessageAdapter>
- (void)updateWeexViewSize:(struct CGSize)arg1;
- (struct CGSize)weexViewSize;
- (NSString *)weexScripte;
- (NSString *)wxDisplayType;
- (NSString *)wxDisplayName;
- (NSString *)wxOpt;
- (NSString *)wxData;
- (NSString *)wxTplUrl;
- (NSString *)wxIdentity;
@end

