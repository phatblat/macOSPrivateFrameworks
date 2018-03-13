//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDictionary, NSString;

@interface FMDFMMAccountInfo : NSObject <NSSecureCoding>
{
    NSString *_dsid;
    NSString *_username;
    NSString *_fmmAuthToken;
    NSDictionary *_additionalInfo;
    NSString *_fmdServerHost;
    NSString *_fmdServerProtocolScheme;
    NSString *_fmdAPSEnvironment;
    unsigned int _uid;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) unsigned int uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSString *fmdAPSEnvironment; // @synthesize fmdAPSEnvironment=_fmdAPSEnvironment;
@property(retain, nonatomic) NSString *fmdServerProtocolScheme; // @synthesize fmdServerProtocolScheme=_fmdServerProtocolScheme;
@property(retain, nonatomic) NSString *fmdServerHost; // @synthesize fmdServerHost=_fmdServerHost;
@property(retain, nonatomic) NSDictionary *additionalInfo; // @synthesize additionalInfo=_additionalInfo;
@property(retain, nonatomic) NSString *fmmAuthToken; // @synthesize fmmAuthToken=_fmmAuthToken;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *dsid; // @synthesize dsid=_dsid;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) BOOL hasMandatoryInfo;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

