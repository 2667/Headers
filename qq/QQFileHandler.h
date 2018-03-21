//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QQFileHandler : NSObject
{
}

+ (id)getPathForCaches:(id)arg1 inDir:(id)arg2;
+ (id)getPathForCaches:(id)arg1;
+ (id)getPathForDocuments:(id)arg1 inDir:(id)arg2;
+ (id)getPathForDocuments:(id)arg1;
+ (id)getPathForResource:(id)arg1 inDir:(id)arg2;
+ (id)getPathForResource:(id)arg1;
+ (id)getDataForDocuments:(id)arg1 inDir:(id)arg2;
+ (id)getDataForResource:(id)arg1 inDir:(id)arg2;
+ (id)getDataForPath:(id)arg1;
+ (void)deletefileForDocumentsDir:(id)arg1 preName:(id)arg2;
+ (void)deleteAllForDocumentsDir:(id)arg1;
+ (id)getSubpathsAtPath:(id)arg1;
+ (void)deleteFile:(id)arg1;
+ (_Bool)isFileExists:(id)arg1;
+ (_Bool)writeFileDictionary:(id)arg1 specifiedFile:(id)arg2;
+ (_Bool)writeFileArray:(id)arg1 specifiedFile:(id)arg2;
+ (id)createList:(id)arg1 listName:(id)arg2;
+ (id)getDirectoryForCaches:(id)arg1;
+ (id)getDirectoryForDocuments:(id)arg1;
+ (id)getTempPath;
+ (id)getLibraryPath;
+ (id)getCachePath;
+ (id)getDocumentPath;
+ (id)getHomeDirectoryPath;

@end
