//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSPasteboard;

@protocol CalUIAutocompleteFieldDelegate <NSObject>

@optional
- (id)currentFetchRequest;
- (BOOL)readPasteboard:(NSPasteboard *)arg1;
- (void)moveUp;
- (void)deleteInEmptyField;
- (void)selectAllInEmptyField;
@end

