//
//  MHLogWindowController.h
//  MongoHub
//
//  Created by Jérôme Lebel on 28/08/2014.
//
//

#import <AppKit/AppKit.h>

@class MHLogWindowController;

@protocol MHLogWindowControllerDelegate <NSObject>
- (void)logWindowControllerWillClose:(MHLogWindowController *)logWindowController;
@end

@interface MHLogWindowController : NSWindowController

@property (nonatomic, strong, readwrite) id<MHLogWindowControllerDelegate> delegate;

+ (instancetype)logWindowController;

- (void)addLogLine:(NSString *)line domain:(NSString *)domain level:(NSString *)level;

@end
