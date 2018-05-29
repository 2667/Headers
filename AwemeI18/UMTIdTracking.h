//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "UMTBase-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface UMTIdTracking : NSObject <UMTBase, NSCoding>
{
    NSMutableDictionary *__snapshots;
    NSMutableArray *__journals;
    NSString *__checksum;
    _Bool __snapshots_isset;
    _Bool __journals_isset;
    _Bool __checksum_isset;
}

@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetChecksum;
- (_Bool)checksumIsSet;
@property(retain, nonatomic, getter=checksum, setter=setChecksum:) NSString *checksum;
- (void)unsetJournals;
- (_Bool)journalsIsSet;
@property(retain, nonatomic, getter=journals, setter=setJournals:) NSMutableArray *journals;
- (void)unsetSnapshots;
- (_Bool)snapshotsIsSet;
@property(retain, nonatomic, getter=snapshots, setter=setSnapshots:) NSMutableDictionary *snapshots;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSnapshots:(id)arg1 journals:(id)arg2 checksum:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

