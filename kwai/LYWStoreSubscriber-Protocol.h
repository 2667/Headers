//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol LYWStateType;

@protocol LYWStoreSubscriber <NSObject>
- (void)newState:(id <LYWStateType>)arg1;

@optional
- (id)dispatchResultNewState:(id <LYWStateType>)arg1;
- (id)dispatchResultNewState:(id <LYWStateType>)arg1 oldState:(id <LYWStateType>)arg2;
- (void)newState:(id <LYWStateType>)arg1 oldState:(id <LYWStateType>)arg2;
@end

