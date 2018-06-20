//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSData, NSDictionary, NSString, NSUUID;

@interface CUPairedPeer : NSObject <NSSecureCoding>
{
    NSDictionary *_acl;
    NSData *_altIRK;
    NSUUID *_identifier;
    NSDictionary *_info;
    NSString *_label;
    NSString *_model;
    NSString *_name;
    NSData *_publicKey;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSData *publicKey; // @synthesize publicKey=_publicKey;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSDictionary *info; // @synthesize info=_info;
@property(copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSData *altIRK; // @synthesize altIRK=_altIRK;
@property(copy, nonatomic) NSDictionary *acl; // @synthesize acl=_acl;
- (void).cxx_destruct;
- (id)detailedDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

