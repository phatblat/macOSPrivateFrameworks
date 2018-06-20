//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSFileWrapper.h"

#import "NSSecureCoding.h"

@class NSString, NSURL;

@interface ICLegacyAttachmentFileWrapper : NSFileWrapper <NSSecureCoding>
{
    NSURL *_cidURL;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSURL *cidURL; // @synthesize cidURL=_cidURL;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *attachmentIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCIDURL:(id)arg1;

@end

