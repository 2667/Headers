//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface PBUnknownFieldSet : NSObject
{
    NSDictionary *fields;
}

+ (id)builderWithUnknownFields:(id)arg1;
+ (id)builder;
+ (id)parseFromInputStream:(id)arg1;
+ (id)parseFromData:(id)arg1;
+ (id)parseFromCodedInputStream:(id)arg1;
+ (id)setWithFields:(id)arg1;
+ (id)defaultInstance;
+ (void)initialize;
@property(retain) NSDictionary *fields; // @synthesize fields;
- (void).cxx_destruct;
- (id)data;
- (int)serializedSizeAsMessageSet;
- (void)writeAsMessageSetTo:(id)arg1;
- (int)serializedSize;
- (void)storeInDictionary:(id)arg1;
- (void)writeDescriptionTo:(id)arg1 withIndent:(id)arg2;
- (void)writeToOutputStream:(id)arg1;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)getField:(int)arg1;
- (_Bool)hasField:(int)arg1;
- (id)initWithFields:(id)arg1;

@end

