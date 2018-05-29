//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSString;

@interface ObjectiveCFileOptions : PBGeneratedMessage <GeneratedMessageProtocol>
{
    unsigned int hasRelaxCamelCase_:1;
    unsigned int hasPackage_:1;
    unsigned int hasClassPrefix_:1;
    unsigned int relaxCamelCase_:1;
    NSString *package;
    NSString *classPrefix;
}

+ (id)builderWithPrototype:(id)arg1;
+ (id)builder;
+ (id)parseFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromCodedInputStream:(id)arg1;
+ (id)parseFromInputStream:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromInputStream:(id)arg1;
+ (id)parseFromData:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromData:(id)arg1;
+ (id)defaultInstance;
+ (void)initialize;
@property(retain) NSString *classPrefix; // @synthesize classPrefix;
@property(retain) NSString *package; // @synthesize package;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)storeInDictionary:(id)arg1;
- (void)writeDescriptionTo:(id)arg1 withIndent:(id)arg2;
- (id)toBuilder;
- (id)builder;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (_Bool)isInitialized;
- (id)defaultInstance;
- (id)init;
@property _Bool relaxCamelCase;
- (void)setHasRelaxCamelCase:(_Bool)arg1;
- (_Bool)hasRelaxCamelCase;
- (void)setHasClassPrefix:(_Bool)arg1;
- (_Bool)hasClassPrefix;
- (void)setHasPackage:(_Bool)arg1;
- (_Bool)hasPackage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

