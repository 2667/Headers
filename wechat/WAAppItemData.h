//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface WAAppItemData : MMObject <WCTTableCoding>
{
    _Bool beStared;
    unsigned int appType;
    unsigned int updateTime;
    NSString *userName;
}

+ (const struct WCTProperty *)beStared;
+ (const struct WCTProperty *)updateTime;
+ (const struct WCTProperty *)appType;
+ (const struct WCTProperty *)userName;
+ (CDUnknownBlockType)PropertyNamed;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTPropertyList *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(nonatomic) _Bool beStared; // @synthesize beStared;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime;
@property(nonatomic) unsigned int appType; // @synthesize appType;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;
- (void).cxx_destruct;
- (id)appItemKey;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end
