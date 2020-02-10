//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class AMPArtworkSourceInfo, NSError, NSString;

@interface AMPSetArtworkResponse : NSObject <NSSecureCoding>
{
    unsigned int _status;
    AMPArtworkSourceInfo *_info;
    NSError *_error;
    NSString *_uuid;
    unsigned long long _imageDataHash;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) unsigned long long imageDataHash; // @synthesize imageDataHash=_imageDataHash;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) AMPArtworkSourceInfo *info; // @synthesize info=_info;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
