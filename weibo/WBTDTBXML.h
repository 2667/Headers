//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WBTDTBXML : NSObject
{
    struct _WBTD_TBXMLElement *rootXMLElement;
    struct _WBTD_TBXMLElementBuffer *currentElementBuffer;
    struct _WBTD_TBXMLAttributeBuffer *currentAttributeBuffer;
    long long currentElement;
    long long currentAttribute;
    char *bytes;
    long long bytesLength;
}

+ (id)tbxmlWithXMLFile:(id)arg1 fileExtension:(id)arg2 error:(id *)arg3;
+ (id)tbxmlWithXMLFile:(id)arg1 fileExtension:(id)arg2;
+ (id)tbxmlWithXMLFile:(id)arg1 error:(id *)arg2;
+ (id)tbxmlWithXMLFile:(id)arg1;
+ (id)tbxmlWithXMLData:(id)arg1 error:(id *)arg2;
+ (id)tbxmlWithXMLData:(id)arg1;
+ (id)tbxmlWithXMLString:(id)arg1 error:(id *)arg2;
+ (id)tbxmlWithXMLString:(id)arg1;
+ (void)iterateAttributesOfElement:(struct _WBTD_TBXMLElement *)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (void)iterateElementsForQuery:(id)arg1 fromElement:(struct _WBTD_TBXMLElement *)arg2 withBlock:(CDUnknownBlockType)arg3;
+ (struct _WBTD_TBXMLElement *)nextSiblingNamed:(id)arg1 searchFromElement:(struct _WBTD_TBXMLElement *)arg2 error:(id *)arg3;
+ (struct _WBTD_TBXMLElement *)nextSiblingNamed:(id)arg1 searchFromElement:(struct _WBTD_TBXMLElement *)arg2;
+ (struct _WBTD_TBXMLElement *)childElementNamed:(id)arg1 parentElement:(struct _WBTD_TBXMLElement *)arg2 error:(id *)arg3;
+ (struct _WBTD_TBXMLElement *)childElementNamed:(id)arg1 parentElement:(struct _WBTD_TBXMLElement *)arg2;
+ (id)valueOfAttributeNamed:(id)arg1 forElement:(struct _WBTD_TBXMLElement *)arg2 error:(id *)arg3;
+ (id)valueOfAttributeNamed:(id)arg1 forElement:(struct _WBTD_TBXMLElement *)arg2;
+ (id)textForElement:(struct _WBTD_TBXMLElement *)arg1 error:(id *)arg2;
+ (id)textForElement:(struct _WBTD_TBXMLElement *)arg1;
+ (id)attributeValue:(struct _WBTD_TBXMLAttribute *)arg1 error:(id *)arg2;
+ (id)attributeValue:(struct _WBTD_TBXMLAttribute *)arg1;
+ (id)attributeName:(struct _WBTD_TBXMLAttribute *)arg1 error:(id *)arg2;
+ (id)attributeName:(struct _WBTD_TBXMLAttribute *)arg1;
+ (id)elementName:(struct _WBTD_TBXMLElement *)arg1 error:(id *)arg2;
+ (id)elementName:(struct _WBTD_TBXMLElement *)arg1;
+ (id)errorWithCode:(int)arg1 userInfo:(id)arg2;
+ (id)errorWithCode:(int)arg1;
+ (id)errorTextForCode:(int)arg1;
@property(readonly, nonatomic) struct _WBTD_TBXMLElement *rootXMLElement; // @synthesize rootXMLElement;
- (void)decodeData:(id)arg1 withError:(id *)arg2;
- (void)decodeData:(id)arg1;
- (id)initWithXMLFile:(id)arg1 fileExtension:(id)arg2 error:(id *)arg3;
- (id)initWithXMLFile:(id)arg1 fileExtension:(id)arg2;
- (id)initWithXMLFile:(id)arg1 error:(id *)arg2;
- (id)initWithXMLFile:(id)arg1;
- (id)initWithXMLData:(id)arg1 error:(id *)arg2;
- (id)initWithXMLData:(id)arg1;
- (id)initWithXMLString:(id)arg1 error:(id *)arg2;
- (id)initWithXMLString:(id)arg1;
- (id)init;
- (struct _WBTD_TBXMLAttribute *)nextAvailableAttribute;
- (struct _WBTD_TBXMLElement *)nextAvailableElement;
- (void)dealloc;
- (void)decodeBytes;
- (void)allocateBytesOfLength:(long long)arg1 error:(id *)arg2;

@end

