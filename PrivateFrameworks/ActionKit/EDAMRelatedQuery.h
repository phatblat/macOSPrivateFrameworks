//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class EDAMNoteFilter, NSString;

@interface EDAMRelatedQuery : FATObject
{
    NSString *_noteGuid;
    NSString *_plainText;
    EDAMNoteFilter *_filter;
    NSString *_referenceUri;
    NSString *_context;
    NSString *_cacheKey;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property(retain, nonatomic) NSString *context; // @synthesize context=_context;
@property(retain, nonatomic) NSString *referenceUri; // @synthesize referenceUri=_referenceUri;
@property(retain, nonatomic) EDAMNoteFilter *filter; // @synthesize filter=_filter;
@property(retain, nonatomic) NSString *plainText; // @synthesize plainText=_plainText;
@property(retain, nonatomic) NSString *noteGuid; // @synthesize noteGuid=_noteGuid;
- (void).cxx_destruct;

@end
