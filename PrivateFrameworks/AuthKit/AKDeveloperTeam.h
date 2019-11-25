//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDictionary, NSString;

@interface AKDeveloperTeam : NSObject <NSSecureCoding>
{
    NSString *_userIdentifier;
    NSString *_teamID;
    NSString *_privateEmail;
    NSDictionary *_apps;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *apps; // @synthesize apps=_apps;
@property(copy, nonatomic) NSString *privateEmail; // @synthesize privateEmail=_privateEmail;
@property(copy, nonatomic) NSString *teamID; // @synthesize teamID=_teamID;
@property(copy, nonatomic) NSString *userIdentifier; // @synthesize userIdentifier=_userIdentifier;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResponseInfo:(id)arg1;

@end

