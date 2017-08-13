//
//  AppDelegate.h
//  Socket
//
//  Created by zhoumeineng on 2017/8/13.
//  Copyright © 2017年 zhoumeineng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

