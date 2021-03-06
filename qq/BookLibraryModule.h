//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class QRBookLibrary;

@interface BookLibraryModule : NSObject
{
    QRBookLibrary *_bookLibrary;
}

+ (id)sharedInstance;
@property(retain, nonatomic) QRBookLibrary *bookLibrary; // @synthesize bookLibrary=_bookLibrary;
- (void).cxx_destruct;
- (void)updateBookWithSecretInfo:(id)arg1;
- (void)saveBookCharpterWithDictionary:(id)arg1;
- (void)deleteBookChapterWithBookId:(id)arg1;
- (id)bookChapterListWithBookId:(id)arg1;
- (long long)updateBookCount;
- (unsigned long long)publishedBookCount;
- (unsigned long long)bookCount;
- (_Bool)addBookWithBookInfo:(id)arg1;
- (void)updateBookWithCloudBookInfos:(id)arg1;
- (void)updateBookWithBookInfo:(id)arg1;
- (void)deleteBookWithBookInfo:(id)arg1;
- (id)lastReadBookInfo;
- (id)bookShelfBookList;
- (id)bookWithCityId:(id)arg1;
- (id)getBookName:(id)arg1;
- (id)bookWithBookId:(id)arg1;
- (void)reinitBookInfoList;
- (void)clearBookInfoArray;
- (void)dealloc;
- (id)init;

@end

