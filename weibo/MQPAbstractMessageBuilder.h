//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MQPMessageBuilder-Protocol.h"

@class NSString;

@interface MQPAbstractMessageBuilder : NSObject <MQPMessageBuilder>
{
}

- (id)setUnknownFields:(id)arg1;
- (id)unknownFields;
- (id)defaultInstance;
- (_Bool)isInitialized;
- (id)buildPartial;
- (id)build;
- (id)mergeFromInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (id)mergeFromInputStream:(id)arg1;
- (id)mergeFromData:(id)arg1 extensionRegistry:(id)arg2;
- (id)mergeFromData:(id)arg1;
- (id)mergeUnknownFields:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (id)mergeFromCodedInputStream:(id)arg1;
- (id)clear;
- (id)clone;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

