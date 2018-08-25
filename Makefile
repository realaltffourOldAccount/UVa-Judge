.PHONY: clean All

All:
	@echo "----------Building project:[ UVa-00230-Borrowers - Debug ]----------"
	@cd "UVa-00230" && "$(MAKE)" -f  "UVa-00230-Borrowers.mk"
clean:
	@echo "----------Cleaning project:[ UVa-00230-Borrowers - Debug ]----------"
	@cd "UVa-00230" && "$(MAKE)" -f  "UVa-00230-Borrowers.mk" clean
