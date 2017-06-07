all :
	make -C ./Colleen
	make -C ./Grace
	make -C ./Sully

clean :
	make clean -C ./Colleen
	make clean -C ./Grace
	make clean -C ./Sully

fclean : clean
	make fclean -C ./Colleen
	make fclean -C ./Grace
	make fclean -C ./Sully

re : fclean all

.PHONY : all clean fclean re norme
