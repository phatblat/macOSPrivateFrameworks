//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ActionKit/FATException.h>

@class NSArray, NSString;

@interface EDAMInvalidContactsException : FATException
{
    NSArray *_contacts;
    NSString *_parameter;
    NSArray *_reasons;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) NSArray *reasons; // @synthesize reasons=_reasons;
@property(retain, nonatomic) NSString *parameter; // @synthesize parameter=_parameter;
@property(retain, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
- (void).cxx_destruct;

@end
