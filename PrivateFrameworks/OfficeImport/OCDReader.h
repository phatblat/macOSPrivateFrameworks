//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSError, NSString;

@interface OCDReader : NSObject
{
    id <TCCancelDelegate> mCancelDelegate;
    BOOL mIsThumbnail;
    NSString *mFileName;
    NSData *mData;
    NSError *mStartError;
    id <OCDReaderDelegate> _delegate;
}

@property(nonatomic) __weak id <OCDReaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL isThumbnail; // @synthesize isThumbnail=mIsThumbnail;
@property(retain, nonatomic) id <TCCancelDelegate> cancelDelegate; // @synthesize cancelDelegate=mCancelDelegate;
@property(retain, nonatomic) NSError *startError; // @synthesize startError=mStartError;
@property(retain, nonatomic) NSData *data; // @synthesize data=mData;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=mFileName;
- (void).cxx_destruct;
- (void)setStartErrorMessageFromException:(id)arg1;
- (id)initWithCancelDelegate:(id)arg1;
- (BOOL)verifyFileFormat;
- (id)read;
- (BOOL)start;
- (_Bool)isBinaryReader;

@end
