//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LYWPassThroughService-Protocol.h"

@class LYWStore, NSString;

@interface KSMediaEditActionStatisticsService : NSObject <LYWPassThroughService>
{
    LYWStore *_store;
    NSString *_pageURL;
}

@property(retain, nonatomic) NSString *pageURL; // @synthesize pageURL=_pageURL;
@property(nonatomic) __weak LYWStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (void)_logWithType:(int)arg1 subtype:(id)arg2 name:(id)arg3;
- (void)KSMediaEditAddTextureItemAction$Port:(id)arg1;
- (void)KSMediaEditGoToPageAction$Port:(id)arg1;
- (void)KSSelectTabAction$Port:(id)arg1;
- (void)KSSetAudioItemSelectedServiceAction$Port:(id)arg1;
- (void)KSSelectFilterServiceAction$Port:(id)arg1;
- (void)KSMediaEditSetErrorAction$Port:(id)arg1;
- (id)initWithPageURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

