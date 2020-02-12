//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDate, NSString, NSURL;

@interface EMMailDropMetadata : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _autoArchive;
    BOOL _isInvalid;
    NSString *_fileName;
    long long _fileSize;
    NSString *_mimeType;
    NSURL *_directUrl;
    NSURL *_wrappedUrl;
    NSDate *_expiration;
    unsigned long long _flags;
    NSString *_UUID;
}

+ (BOOL)supportsSecureCoding;
+ (id)mailDropMetadata;
@property(nonatomic) BOOL isInvalid; // @synthesize isInvalid=_isInvalid;
@property(copy, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(nonatomic) unsigned long long flags; // @synthesize flags=_flags;
@property(retain, nonatomic) NSDate *expiration; // @synthesize expiration=_expiration;
@property(retain, nonatomic) NSURL *wrappedUrl; // @synthesize wrappedUrl=_wrappedUrl;
@property(retain, nonatomic) NSURL *directUrl; // @synthesize directUrl=_directUrl;
@property(nonatomic) BOOL autoArchive; // @synthesize autoArchive=_autoArchive;
@property(copy, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(nonatomic) long long fileSize; // @synthesize fileSize=_fileSize;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
- (void).cxx_destruct;
- (void)merge:(id)arg1;
- (BOOL)isBannerWithMultiple;
- (BOOL)isExpired;
- (BOOL)isPhotoArchive;
- (BOOL)isBanner;
- (id)wrappedUrlString;
- (id)directUrlString;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
