//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMPlainCredential : FATObject
{
    NSNumber *_userId;
    NSString *_password;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSNumber *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;

@end
