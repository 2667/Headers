//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UTMCConfEntity.h"

@class NSString;

@interface UTMCKeyValueEntity : UTMCConfEntity
{
    NSString *_tableName;
    NSString *_mkey;
    NSString *_mvalue;
}

@property(retain) NSString *mvalue; // @synthesize mvalue=_mvalue;
@property(retain) NSString *mkey; // @synthesize mkey=_mkey;
@property(retain) NSString *tableName; // @synthesize tableName=_tableName;
- (void).cxx_destruct;
- (void)setConfigItem:(id)arg1;
- (void)storeConfig:(id)arg1;
- (id)initWithEntity:(id)arg1;
- (id)init;

@end
