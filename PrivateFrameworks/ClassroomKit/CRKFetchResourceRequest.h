//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CATTaskRequest.h"

@class NSURL;

@interface CRKFetchResourceRequest : CATTaskRequest
{
    NSURL *_resourceURL;
}

+ (BOOL)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;
@property(copy, nonatomic) NSURL *resourceURL; // @synthesize resourceURL=_resourceURL;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

