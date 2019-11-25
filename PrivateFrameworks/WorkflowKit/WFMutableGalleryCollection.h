//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WorkflowKit/WFGalleryCollection.h>

@class CKRecordID, NSArray, NSDate, NSString;

@interface WFMutableGalleryCollection : WFGalleryCollection
{
    CKRecordID *identifier;
    NSString *name;
    NSString *collectionDescription;
    NSArray *workflows;
    NSDate *modifiedAt;
    NSString *language;
    CKRecordID *base;
    NSString *persistentIdentifier;
}

@property(copy, nonatomic) NSString *persistentIdentifier; // @synthesize persistentIdentifier;
@property(retain, nonatomic) CKRecordID *base; // @synthesize base;
@property(copy, nonatomic) NSString *language; // @synthesize language;
@property(retain, nonatomic) NSDate *modifiedAt; // @synthesize modifiedAt;
@property(copy, nonatomic) NSArray *workflows; // @synthesize workflows;
@property(copy, nonatomic) NSString *collectionDescription; // @synthesize collectionDescription;
@property(copy, nonatomic) NSString *name; // @synthesize name;
@property(copy, nonatomic) CKRecordID *identifier; // @synthesize identifier;
- (void).cxx_destruct;

@end

