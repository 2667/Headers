//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WKTemplateStorageProtocol-Protocol.h"

@class NSString;

@interface ImmPayTplStorage : NSObject <WKTemplateStorageProtocol>
{
    NSString *_filePath;
}

- (void).cxx_destruct;
- (id)tplDirPath;
- (id)tplFilePath:(id)arg1;
- (_Bool)writeTpl:(id)arg1;
- (_Bool)deleteTpl:(id)arg1;
- (id)readTpl:(id)arg1;
- (id)getAllTags;
- (id)getAllTemplates;
- (id)selectLatestTemplatesByIds:(id)arg1;
- (_Bool)deleteTemplatesByTag:(id)arg1;
- (_Bool)deleteTemplatesByIds:(id)arg1;
- (_Bool)saveTemplate:(id)arg1;
- (_Bool)saveTemplates:(id)arg1;
- (_Bool)insertTemplates:(id)arg1;
- (void)openStorage;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

