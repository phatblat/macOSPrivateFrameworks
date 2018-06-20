//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSDate, NSString, NSTimeZone, NSURL;

@interface RVDocumentContext : NSObject <NSSecureCoding>
{
    NSString *authorName;
    NSString *authorEmailAddress;
    NSString *authorContactUUID;
    NSDate *contentReferenceDate;
    NSTimeZone *contentReferenceTimeZone;
    NSString *contentSubject;
    NSString *selectedText;
    NSURL *documentURL;
    NSArray *existingDDResultsList;
    NSString *coreSpotlightUniqueIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *coreSpotlightUniqueIdentifier; // @synthesize coreSpotlightUniqueIdentifier;
@property(copy, nonatomic) NSArray *existingDDResultsList; // @synthesize existingDDResultsList;
@property(copy, nonatomic) NSURL *documentURL; // @synthesize documentURL;
@property(copy, nonatomic) NSString *selectedText; // @synthesize selectedText;
@property(copy, nonatomic) NSString *contentSubject; // @synthesize contentSubject;
@property(copy, nonatomic) NSTimeZone *contentReferenceTimeZone; // @synthesize contentReferenceTimeZone;
@property(copy, nonatomic) NSDate *contentReferenceDate; // @synthesize contentReferenceDate;
@property(copy, nonatomic) NSString *authorContactUUID; // @synthesize authorContactUUID;
@property(copy, nonatomic) NSString *authorEmailAddress; // @synthesize authorEmailAddress;
@property(copy, nonatomic) NSString *authorName; // @synthesize authorName;
- (void).cxx_destruct;
- (void)setNameAndEmailWithRawSenderField:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

