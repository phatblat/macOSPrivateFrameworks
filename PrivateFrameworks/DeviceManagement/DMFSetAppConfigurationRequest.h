//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CATTaskRequest.h"

@class NSDictionary, NSString;

@interface DMFSetAppConfigurationRequest : CATTaskRequest
{
    NSString *_bundleIdentifier;
    NSDictionary *_configuration;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *configuration; // @synthesize configuration=_configuration;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

