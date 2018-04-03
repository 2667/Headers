//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LYWDispatch-Protocol.h"
#import "LYWSubscribe-Protocol.h"

@class NSString;
@protocol LYWMiddleware, LYWReducerStore><LYWSubscribe;

@interface LYWStore : NSObject <LYWSubscribe, LYWDispatch>
{
    id <LYWReducerStore><LYWSubscribe> _reducerStore;
    id <LYWMiddleware> _headerMiddleware;
}

@property(retain, nonatomic) id <LYWMiddleware> headerMiddleware; // @synthesize headerMiddleware=_headerMiddleware;
@property(retain, nonatomic) id <LYWReducerStore><LYWSubscribe> reducerStore; // @synthesize reducerStore=_reducerStore;
- (void).cxx_destruct;
- (void)setupHeaderMiddleware:(id)arg1;
- (void)unsubscribe:(id)arg1;
- (void)subscribe:(id)arg1 selector:(CDUnknownBlockType)arg2;
- (id)dispatchAction:(id)arg1;
- (id)state;
- (id)initWithReducer:(id)arg1 reducerStore:(id)arg2 middleware:(id)arg3;
- (id)initNewStateStoreWithReducer:(id)arg1 middleware:(id)arg2;
- (id)initWithReducer:(id)arg1 middleware:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

